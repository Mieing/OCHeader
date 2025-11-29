@class NSString;

@interface MJMovieTemplateInfo : NSObject

@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *channelEventName;
@property (copy, nonatomic) NSString *finderNickName;
@property (nonatomic) unsigned long long minimumiOSSDKVersion;
@property (nonatomic) unsigned long long minimumAndroidSDKVersion;
@property (nonatomic) unsigned long long templateType;

+ (id)templateInfoWithOMJTemplateInfo:(id)a0 OMJMusicInfo:(id)a1 templateType:(unsigned long long)a2;

- (void).cxx_destruct;

@end
