@class NSString, NSObject;

@interface WCFinderCommonSelectListSheetItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSObject *userInfo;

+ (id)sheetItemWithTitle:(id)a0 desc:(id)a1;

- (void).cxx_destruct;

@end
