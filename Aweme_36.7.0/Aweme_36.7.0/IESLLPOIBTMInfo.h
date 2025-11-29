@class NSString, UIResponder;

@interface IESLLPOIBTMInfo : NSObject

@property (copy, nonatomic) NSString *btm;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) UIResponder *responder;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBTMChain;
@property (nonatomic) long long btmChainLength;

+ (id)btmInfoWithBTM:(id)a0 responder:(id)a1 eventType:(unsigned long long)a2 enterNewPage:(BOOL)a3;
+ (id)btmInfoWithBTM:(id)a0 responder:(id)a1 eventType:(unsigned long long)a2 enterNewPage:(BOOL)a3 addBTMChain:(BOOL)a4 btmChainLength:(long long)a5;
+ (id)btmInfoWithBTM:(id)a0 responder:(id)a1 eventType:(unsigned long long)a2;

- (void).cxx_destruct;

@end
