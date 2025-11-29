@class NSString;

@interface IESIMEmoticonTextBackedString : NSObject <NSCoding, NSCopying, IESIMEmoticonTextBackedStringProtocol>

@property (copy, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringWithString:(id)a0;

@end
