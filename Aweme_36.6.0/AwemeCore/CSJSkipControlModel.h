@class NSString;

@interface CSJSkipControlModel : NSObject <NSSecureCoding, CSJModelSerialization>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long position;
@property (nonatomic) long long leftOrRightMargin;
@property (nonatomic) long long topOrBottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_topOrBottomMarginDefaultValueWithPositon:(unsigned long long)a0;
+ (id)fromDictionary:(id)a0;

@end
