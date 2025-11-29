@class NSString;

@interface AWESelfDigitalControlCellModel : NSObject

@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *rightTitle;
@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) id /* block */ cellTappedBlock;

- (void).cxx_destruct;

@end
