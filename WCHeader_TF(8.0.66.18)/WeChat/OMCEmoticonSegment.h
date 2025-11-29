@class NSString;

@interface OMCEmoticonSegment : OMCElementSegment

@property (readonly, nonatomic) struct SharedPtr<XMSEmoticonSegment> { struct XMSEmoticonSegment *x0; } backingEmoticonSegment;
@property (readonly, nonatomic) NSString *animatedImageFilePath;
@property (readonly, nonatomic) unsigned long long animatedImageDecoderType;
@property (readonly, nonatomic) unsigned long long timingFillMode;

- (BOOL)replaceEmoticonWithFilePath:(id)a0 decoderType:(unsigned long long)a1 timingFillMode:(unsigned long long)a2;

@end
