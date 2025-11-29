@class NSString, UIColor;

@interface AWEIMShareAdditionTextViewButtonConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ imageProvider;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
