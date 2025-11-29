@class NSString;

@interface AWEIMUserTagInfo : NSObject <IESIMUserTagRenderDataProtocol>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagDesc;
@property (nonatomic) long long tagStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
