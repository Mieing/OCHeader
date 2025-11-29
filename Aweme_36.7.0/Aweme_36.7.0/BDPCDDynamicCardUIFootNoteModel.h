@class NSString;

@interface BDPCDDynamicCardUIFootNoteModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long positionStyle;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
