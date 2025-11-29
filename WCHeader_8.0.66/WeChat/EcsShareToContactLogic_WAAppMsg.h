@class EcsWAAppMessageModel;

@interface EcsShareToContactLogic_WAAppMsg : EcsShareToContactLogic_Base

@property (retain, nonatomic) EcsWAAppMessageModel *model;

- (id)initWithParams:(id)a0 extraData:(id)a1;
- (void)genMessage:(id /* block */)a0;
- (void)requestShareInfoIfNeededWithCompletion:(id /* block */)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (id)genMessageWrapFromModel:(id)a0;
- (void)makeSureMessageWrapVaild;
- (void).cxx_destruct;

@end
