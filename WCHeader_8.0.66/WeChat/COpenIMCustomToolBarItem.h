@class NSString;

@interface COpenIMCustomToolBarItem : NSObject

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *actionUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
