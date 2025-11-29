@class AWEECOMIMPageTrackUtil;

@interface AWEECOMIMPageClickUtil : NSObject

@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;

- (void)handleClickWithClickParamsModel:(id)a0 clickModel:(id)a1;
- (id)generateClickTaskWithClickParamsModel:(id)a0;
- (void)handleClickWithClickTask:(id)a0 clickModel:(id)a1;
- (void).cxx_destruct;

@end
