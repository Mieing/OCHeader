@class NSString;

@interface AWEDataLayerLinkedNode : NSObject {
    NSString *key;
    id value;
    AWEDataLayerLinkedNode *pre;
    AWEDataLayerLinkedNode *next;
}

- (void).cxx_destruct;

@end
