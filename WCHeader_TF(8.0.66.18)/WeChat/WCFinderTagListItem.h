@class NSString;

@interface WCFinderTagListItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) id userInfo;

+ (id)itemWithTitle:(id)a0 userInfo:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
