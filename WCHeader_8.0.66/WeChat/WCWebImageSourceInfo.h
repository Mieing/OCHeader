@class NSString, NSURL, NSObject;

@interface WCWebImageSourceInfo : MMObject

@property (nonatomic) unsigned int type;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceTitle;
@property (retain, nonatomic) NSURL *sourceIconUrl;
@property (retain, nonatomic) NSObject *sourceData;
@property (copy, nonatomic) NSString *searchReqKey;
@property (nonatomic) long long searchScene;

+ (id)imageSourceInfoForPlaceHolder;
+ (id)imageSourceInfoFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
