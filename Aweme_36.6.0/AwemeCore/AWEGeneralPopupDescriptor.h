@class AWEGeneralPopupRecord, AWEGeneralPopupPresenter, AWEGeneralPopupModel;

@interface AWEGeneralPopupDescriptor : NSObject

@property (retain, nonatomic) AWEGeneralPopupModel *model;
@property (retain, nonatomic) AWEGeneralPopupRecord *record;
@property (retain, nonatomic) AWEGeneralPopupPresenter *presenter;

- (BOOL)showPopupIfCanAtTiming:(long long)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
