@class IESECSliceXAction;

@interface IESECSliceXInlineContent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) struct IESECSliceXInlineOffset { double left; double right; } inlineOffset;
@property (retain, nonatomic) IESECSliceXAction *clickAction;
@property (retain, nonatomic) IESECSliceXAction *longClickAction;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (void)initialize;

- (void)migrateFromOther:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;

@end
