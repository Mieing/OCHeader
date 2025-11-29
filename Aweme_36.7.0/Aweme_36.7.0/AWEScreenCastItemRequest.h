@class NSDictionary, NSArray, NSString;

@interface AWEScreenCastItemRequest : NSObject

@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSArray *resolutionInfos;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *bizToken;
@property (nonatomic) unsigned long long startPosition;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) unsigned long long uiType;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long apiVersion;

- (id)initWithAwemeModel:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;

@end
