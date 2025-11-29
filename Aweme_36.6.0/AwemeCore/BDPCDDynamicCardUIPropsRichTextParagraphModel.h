@class NSArray, NSString;

@interface BDPCDDynamicCardUIPropsRichTextParagraphModel : BDPCDDynamicCardUIPropsModel <BDPCDDynamicCardUITextParagraphProtocol>

@property (nonatomic) long long aligntype;
@property (nonatomic) long long maxLine;
@property (copy, nonatomic) NSArray *padding;
@property (copy, nonatomic) NSArray *margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
