@class NSArray, NSString, AWEIMAudioTranslateResponseExtra, NSNumber;

@interface AWEIMAudioTranslateResponseModel : NSObject

@property (copy, nonatomic) NSArray *translateResults;
@property (retain, nonatomic) AWEIMAudioTranslateResponseExtra *extraModel;
@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
