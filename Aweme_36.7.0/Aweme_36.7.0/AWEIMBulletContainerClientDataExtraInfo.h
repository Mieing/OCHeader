@class AWEIMBulletContainerClientDataAwemeInfo, NSString, NSDictionary, AWEIMBulletContainerClientDataLiveInfo;

@interface AWEIMBulletContainerClientDataExtraInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMBulletContainerClientDataLiveInfo *liveInfo;
@property (copy, nonatomic) AWEIMBulletContainerClientDataAwemeInfo *awemeInfo;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (copy, nonatomic) NSString *shareMergeContext;
@property (copy, nonatomic) NSString *shareMergeMessagePath;
@property (nonatomic) double serverTime;
@property (retain, nonatomic) NSDictionary *bizInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
