@class UIView;

@interface StandardButtonProviderChainModel : NSObject

@property (weak, nonatomic) UIView *viewSuperview;
@property (readonly, nonatomic) id /* block */ BigStrong;
@property (readonly, nonatomic) id /* block */ BigWeak;
@property (readonly, nonatomic) id /* block */ HalfScreenStrong;
@property (readonly, nonatomic) id /* block */ HalfScreenWeak;
@property (readonly, nonatomic) id /* block */ SmallStrong;
@property (readonly, nonatomic) id /* block */ SmallGreen;
@property (readonly, nonatomic) id /* block */ SmallWeak;
@property (readonly, nonatomic) id /* block */ SmallGray;
@property (readonly, nonatomic) id /* block */ SmallWeakInverse;
@property (readonly, nonatomic) id /* block */ WideBigGreen;
@property (readonly, nonatomic) id /* block */ WideBigRed;
@property (readonly, nonatomic) id /* block */ WideBigGray;
@property (readonly, nonatomic) id /* block */ WideBig;
@property (readonly, nonatomic) id /* block */ BigGreen;
@property (readonly, nonatomic) id /* block */ BigRed;
@property (readonly, nonatomic) id /* block */ BigGray;
@property (readonly, nonatomic) id /* block */ Big;
@property (readonly, nonatomic) id /* block */ MiddleGreen;
@property (readonly, nonatomic) id /* block */ MiddleGray;
@property (readonly, nonatomic) id /* block */ Middle;
@property (readonly, nonatomic) id /* block */ BigLine;
@property (readonly, nonatomic) id /* block */ SmallLine;
@property (readonly, nonatomic) id /* block */ BigGreenLine;
@property (readonly, nonatomic) id /* block */ SmallGreenLine;
@property (readonly, nonatomic) id /* block */ NewBig;
@property (readonly, nonatomic) id /* block */ NewBigGreen;
@property (readonly, nonatomic) id /* block */ NewBigGrey;
@property (readonly, nonatomic) id /* block */ NewBigRed;
@property (readonly, nonatomic) id /* block */ Link;

- (id /* block */)genLinkButton;
- (id)initWithSuperview:(id)a0;
- (void).cxx_destruct;

@end
