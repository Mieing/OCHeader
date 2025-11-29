@class NSRegularExpression, NSString, NSCharacterSet;

@interface MMFinderLiveGiftCustomizationStandardPermissiveTextValidator : NSObject <MMFinderLiveGiftCustomizationTextValidating>

@property (retain, nonatomic) NSRegularExpression *nonAlphanumericRegex;
@property (retain, nonatomic) NSCharacterSet *nonWhitespaceCharset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isTextValid:(id)a0 transient:(BOOL)a1 forStyle:(id)a2 reason:(id *)a3;
- (BOOL)isCharacterValid:(id)a0 atCharacterIndex:(long long)a1 reason:(id *)a2;
- (BOOL)isWeChatEmoticonValid:(id)a0 atCharacterIndex:(long long)a1 reason:(id *)a2;
- (void).cxx_destruct;

@end
