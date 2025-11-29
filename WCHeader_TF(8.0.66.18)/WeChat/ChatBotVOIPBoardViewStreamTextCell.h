@class NSTimer, NSMutableArray, UILabel;
@protocol ChatBotStreamTextDelegate;

@interface ChatBotVOIPBoardViewStreamTextCell : ChatBotVOIPBoardViewBaseCell

@property (retain, nonatomic) NSMutableArray *textQueue;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) UILabel *mainLabel;
@property (weak, nonatomic) id<ChatBotStreamTextDelegate> delegate;

- (double)setupViewWithWidth:(double)a0;
- (void)appendTextSegment:(id)a0;
- (void)processNextSegment;
- (void)streamText:(id)a0 completion:(id /* block */)a1;
- (void)updateTextForLabel:(id)a0;
- (void)updateBaseReportDataPB:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMainLabelRect;
- (void)clearText;
- (void).cxx_destruct;

@end
