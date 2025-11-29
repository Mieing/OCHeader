@class AWEHPRealTimeActivityChannelInfo, NSString;

@interface AWEHPRealTimeActivityInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHPRealTimeActivityChannelInfo *channelInfo;
@property (copy, nonatomic) NSString *entryID;
@property (nonatomic) long long deadlineTime;
@property (nonatomic) long long versionID;
@property (nonatomic) BOOL isDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)channelInfoJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;

@end
