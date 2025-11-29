@class CMessageWrap;

@interface MMRTCSessionMenuResponder : MMRTCMenuResponder

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) BOOL bFromTranlateText;

- (id)initWithMessageWrap:(id)a0;
- (id)getMsgWrap;
- (void)onTextFavorite:(id)a0;
- (void)onWordFingertipSearch;
- (void)onTranslateText;
- (id)getSelectMenuItem;
- (void).cxx_destruct;

@end
