@class NSString, Protocol;

@interface AWETransitionPattern : NSObject

@property (nonatomic) unsigned long long typeMask;
@property (nonatomic) unsigned long long interactionMask;
@property (retain, nonatomic) Protocol *fromProtocol;
@property (retain, nonatomic) Protocol *toProtocol;
@property (copy, nonatomic) NSString *contextProviderClassName;

- (void).cxx_destruct;

@end
