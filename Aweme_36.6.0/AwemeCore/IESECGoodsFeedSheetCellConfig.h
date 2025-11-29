@class NSString, IESECURLModel;

@interface IESECGoodsFeedSheetCellConfig : NSObject

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;

+ (id)actionWithTitle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
