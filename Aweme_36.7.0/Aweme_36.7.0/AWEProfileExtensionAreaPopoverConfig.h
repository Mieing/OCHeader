@class NSString;

@interface AWEProfileExtensionAreaPopoverConfig : NSObject <AWEProfileExtensionAreaPopoverConfigProtocol>

@property (retain, nonatomic) NSString *popoverContent;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
