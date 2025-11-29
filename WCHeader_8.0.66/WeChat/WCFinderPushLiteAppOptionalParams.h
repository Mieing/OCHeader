@class NSString, NSDictionary;

@interface WCFinderPushLiteAppOptionalParams : NSObject

@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) unsigned long long tagType;
@property (copy, nonatomic) NSString *tagSecKey;
@property (retain, nonatomic) NSDictionary *poiInfo;
@property (retain, nonatomic) NSString *postId;
@property (nonatomic) unsigned long long enterScene;

- (void).cxx_destruct;

@end
