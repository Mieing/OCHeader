@class NSString, NSDictionary, NSData, NSArray;

@interface BDASifLynxModel : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) id globalProps;
@property (copy, nonatomic) NSData *templateData;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSArray *customUIElements;

- (void).cxx_destruct;

@end
