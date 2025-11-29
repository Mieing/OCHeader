@class NSString, AWEHPTabLandingModel;

@interface AWEHPLandingScheduledModel : NSObject <AWEHPLandingScheduledModelProtocol>

@property (retain, nonatomic) AWEHPTabLandingModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
