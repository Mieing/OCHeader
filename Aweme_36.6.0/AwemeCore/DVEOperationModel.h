@class NSError, NSString;

@interface DVEOperationModel : NSObject

@property (retain, nonatomic) NSError *dve_error;
@property (nonatomic) BOOL dve_isReallyReverse;
@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSString *opName;

+ (id)modelWithOpName:(id)a0 resultCode:(unsigned long long)a1;
+ (id)modelWithResultCode:(unsigned long long)a0;
+ (id)dve_modelWithResultCode:(unsigned long long)a0 error:(id)a1;

- (void).cxx_destruct;

@end
