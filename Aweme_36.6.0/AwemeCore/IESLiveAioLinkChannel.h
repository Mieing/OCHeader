@class NSString, UIView;

@interface IESLiveAioLinkChannel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *service;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) BOOL remoteClose;
@property (weak, nonatomic) UIView *lynxView;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *channelVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createChannel:(id)a0 method:(id)a1 tag:(id)a2 from:(id)a3;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
