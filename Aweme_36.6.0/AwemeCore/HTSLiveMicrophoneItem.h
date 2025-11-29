@class NSString;

@interface HTSLiveMicrophoneItem : IESLivePBBaseMessage

@property (nonatomic) int microphoneType;
@property (nonatomic) long long microPhoneNum;
@property (copy, nonatomic) NSString *microPhoneNumStr;
@property (copy, nonatomic) NSString *microPhoneNumFuzzy;

+ (id)descriptor;

@end
