@class NSString, AWEAwemeModel;

@interface AWECommerceMonitorContext : HTSService <AWECommerceMonitorContext>

@property (retain, nonatomic) AWEAwemeModel *curAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *abnormalAwemeModel;
@property (copy, nonatomic) NSString *componentTreeInfo;
@property (copy, nonatomic) NSString *componentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
