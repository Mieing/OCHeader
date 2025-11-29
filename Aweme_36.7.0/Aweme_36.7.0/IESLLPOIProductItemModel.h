@class NSString, NSDictionary;

@interface IESLLPOIProductItemModel : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *spuID;
@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) double itemHeight;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
