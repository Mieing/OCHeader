@class NSString;

@interface IESIMGroupSetDetailInfo : NSObject

@property (readonly, copy, nonatomic) NSString *mainTitle;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) long long maxInputSize;
@property (readonly, nonatomic) double panelHeight;
@property (readonly, copy, nonatomic) NSString *textViewPlaceHolderText;
@property (readonly, copy, nonatomic) NSString *textViewText;
@property (readonly, copy, nonatomic) NSString *cancelBtnText;
@property (readonly, copy, nonatomic) NSString *finishBtnText;
@property (readonly, copy, nonatomic) id /* block */ onClickFinish;

- (id)initWithMainTitle:(id)a0 subTitle:(id)a1 maxInputSize:(long long)a2 textViewPlaceHolderText:(id)a3 panelHeight:(double)a4 textViewText:(id)a5 cancelBtnText:(id)a6 finishBtnText:(id)a7 onClickFinish:(id /* block */)a8;
- (void).cxx_destruct;

@end
