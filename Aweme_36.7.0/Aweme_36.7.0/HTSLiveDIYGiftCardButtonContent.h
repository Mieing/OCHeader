@class NSString, NSMutableArray;

@interface HTSLiveDIYGiftCardButtonContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *popupContent;
@property (retain, nonatomic) NSMutableArray *popupButtonTextArray;
@property (readonly, nonatomic) unsigned long long popupButtonTextArray_Count;
@property (copy, nonatomic) NSString *interfacePath;
@property (copy, nonatomic) NSString *interfaceParams;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) int successAction;
@property (copy, nonatomic) NSString *successJumpSchema;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)descriptor;

@end
