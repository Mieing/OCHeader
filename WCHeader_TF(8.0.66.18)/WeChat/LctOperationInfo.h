@class LctOperationShowInfoWithProduct, NewDocumentItem;

@interface LctOperationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showEntry;
@property (retain, nonatomic) NewDocumentItem *docItem;
@property (retain, nonatomic) LctOperationShowInfoWithProduct *showInfoWithProduct;
@property (nonatomic) unsigned int operationType;

+ (void)initialize;

@end
