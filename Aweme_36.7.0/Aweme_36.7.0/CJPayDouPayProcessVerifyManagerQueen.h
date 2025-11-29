@interface CJPayDouPayProcessVerifyManagerQueen : CJPayBaseVerifyManagerQueen

@property (nonatomic) double beforeConfirmRequestTimestamp;
@property (nonatomic) double afterConfirmRequestTimestamp;
@property (nonatomic) double afterQueryResultTimestamp;

- (id)p_selectionVoucherTracks;
- (void)afterConfirmRequestWithResponse:(id)a0;
- (id)cashierExtraTrackerParams;
- (void)afterLastQueryResultWithResultResponse:(id)a0;
- (void)beforeConfirmRequest;
- (void)beforQueryResult;
- (id)p_checkTypeMapString:(id)a0;
- (id)p_activityInfoParamsWithVoucherArray:(id)a0;

@end
