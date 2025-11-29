@class NSString, AWEURLModel;

@interface AWELiveMetaHost : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) NSString *tip;
@property (retain, nonatomic) NSString *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
