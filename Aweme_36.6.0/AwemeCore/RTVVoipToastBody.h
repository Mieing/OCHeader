@class NSString;
@protocol Optional;

@interface RTVVoipToastBody : JSONModel

@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString<Optional> *roomID;

+ (id)keyMapper;
+ (id)toastBodyWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
