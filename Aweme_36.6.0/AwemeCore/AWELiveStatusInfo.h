@class NSDictionary, AWEUserModel, NSString;

@interface AWELiveStatusInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUserModel *liveUser;
@property (nonatomic) long long liveStatus;
@property (retain, nonatomic) NSDictionary *liveNotifyLight;
@property (retain, nonatomic) NSString *previewText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJsonData:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;

@end
