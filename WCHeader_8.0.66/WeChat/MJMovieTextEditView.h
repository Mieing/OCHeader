@class NSString, MJMovieTextButton, MJMovieDeleteButton;
@protocol MJMovieTextEditViewDelegate;

@interface MJMovieTextEditView : MMUIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) MJMovieTextButton *textButton;
@property (retain, nonatomic) MJMovieDeleteButton *deleteButton;
@property (retain, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id<MJMovieTextEditViewDelegate> delegate;

- (id)initWithStyle:(unsigned long long)a0;
- (void)setupViews;
- (id)displayingText;
- (void)setDisplayingText:(id)a0;
- (void)resetDisplayingText;
- (void)handleSelectEditText:(id)a0;
- (void)handleSelectDelete:(id)a0;
- (void).cxx_destruct;

@end
