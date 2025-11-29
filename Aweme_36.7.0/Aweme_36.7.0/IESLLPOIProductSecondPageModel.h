@class NSString;

@interface IESLLPOIProductSecondPageModel : NSObject

@property (nonatomic) long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
