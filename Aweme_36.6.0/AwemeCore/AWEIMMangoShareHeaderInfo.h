@class NSString, UIImage;

@interface AWEIMMangoShareHeaderInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) UIImage *coverImage;
@property (readonly, copy, nonatomic) NSString *coverURLString;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 coverURLString:(id)a2;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 coverImage:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
