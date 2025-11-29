@class NSString, IESLiveMultiChannelInfo, NSMutableDictionary;

@interface IESLiveMultiLinkerRTCInfoModel : NSObject

@property (nonatomic) BOOL isOwnerLinked;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (retain, nonatomic) NSMutableDictionary *rtcLinkerBusinessStatusDict;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *dataSource;

- (void).cxx_destruct;
- (id)logString;

@end
