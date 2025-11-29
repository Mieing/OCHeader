@class NSString, UIImage;

@interface AWEAwemeLongPressFunctionModelParams : NSObject <AWEAwemeLongPressFunctionModelParamsProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeWithTitle:(id)a0 iconImage:(id)a1 actionBlock:(id /* block */)a2 willAppearBlock:(id /* block */)a3;

- (void).cxx_destruct;

@end
