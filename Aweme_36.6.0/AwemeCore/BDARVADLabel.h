@class NSString, NSNumber;
@protocol Optional;

@interface BDARVADLabel : JSONModel

@property (copy, nonatomic) NSString<Optional> *text;
@property (copy, nonatomic) NSString<Optional> *color_text;
@property (copy, nonatomic) NSString<Optional> *color;
@property (retain, nonatomic) NSNumber<Optional> *type;

- (void).cxx_destruct;

@end
