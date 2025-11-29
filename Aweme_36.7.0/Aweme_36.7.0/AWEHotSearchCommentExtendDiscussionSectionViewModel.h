@interface AWEHotSearchCommentExtendDiscussionSectionViewModel : AWECommonFeedBaseSectionViewModel

- (id)referString;
- (void)configCellModels;
- (id)getDetailSchema:(id)a0 index:(long long)a1;
- (void)trackCellClickWithCellModel:(id)a0 extra:(id)a1;
- (void)trackCellShowWithCellModel:(id)a0 extra:(id)a1;
- (id)innerCardModel;
- (void)p_addTrackParams:(id)a0 cellModel:(id)a1;

@end
