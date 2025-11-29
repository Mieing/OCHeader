@class NSString;

@interface WCSelectableMenuItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double minWidth;

+ (id)textItemWithText:(id)a0;

- (void).cxx_destruct;

@end
