@class NSString, BDPCDDynamicCardUIFootNoteModel;

@interface BDPCDDynamicCardMediaModel : BDPCDDynamicCardUIPropsModel

@property (copy, nonatomic) NSString *coverUrlString;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) BDPCDDynamicCardUIFootNoteModel *footNoteModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
