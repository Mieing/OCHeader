@class NSString;

@interface BDTGTSSignItem : NSObject

@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *tsSign;

+ (id)adapterTsSignFromParams:(id)a0;

- (void).cxx_destruct;

@end
