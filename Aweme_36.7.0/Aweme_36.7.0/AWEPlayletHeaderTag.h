@class NSString;

@interface AWEPlayletHeaderTag : DUXTextTag

@property (retain, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) id /* block */ onTagClicked;

- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1 title:(id)a2;
- (void)onTapGesture:(id)a0;
- (void).cxx_destruct;

@end
