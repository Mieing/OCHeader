@class NSString;

@interface IESIMEmoticonMatchingResult : NSObject <IESIMEmoticonMatchingResultProtocol>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *emoticonImageName;
@property (copy, nonatomic) NSString *representationString;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (copy, nonatomic) NSString *emoticonShowName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
