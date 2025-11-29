@class NSString, GlobalSearchInputSheetConfig, NSMutableArray;

@interface GlobalSearchInputActionConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) unsigned int timeout;
@property (retain, nonatomic) GlobalSearchInputSheetConfig *defaultSheet;
@property (retain, nonatomic) NSMutableArray *actionSheets;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
