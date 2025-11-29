@class NSString;

@interface WADebugMenuSheetItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ clickAction;

+ (id)createWithTitle:(id)a0 clickAction:(id /* block */)a1;

- (void).cxx_destruct;

@end
