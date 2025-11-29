@class NSString, NSMutableArray, NSMutableString;

@interface AWEMVDealWithServerPreprocessResourceModel : NSObject

@property (nonatomic) long long index;
@property (retain, nonatomic) NSMutableArray *resourceURLArr;
@property (retain, nonatomic) NSMutableArray *resourceIDArr;
@property (copy, nonatomic) NSString *algorithm;
@property (retain, nonatomic) NSMutableString *algorithmType;
@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) NSString *algorithmParamJson;
@property (nonatomic) BOOL needServerExecute;
@property (nonatomic) BOOL multiInput;

- (void).cxx_destruct;

@end
