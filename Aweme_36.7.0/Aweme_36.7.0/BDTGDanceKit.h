@interface BDTGDanceKit : NSObject

+ (id)maskString:(id)a0;
+ (id)stringValueForKey:(id)a0 inDictionary:(id)a1;
+ (id)base64EncodedFromString:(id)a0;
+ (id)base64DecodedFromString:(id)a0;
+ (id)hexDecodedFromString:(id)a0;
+ (id)hexEncodedFromData:(id)a0;
+ (id)jsonDecodedFromString:(id)a0;
+ (id)jsonEncodedFromDictionary:(id)a0;
+ (id)dictionaryValueForKey:(id)a0 inDictionary:(id)a1;
+ (id)arrayValueForKey:(id)a0 inDictionary:(id)a1;
+ (id)queryItemValueForKey:(id)a0 inURL:(id)a1;
+ (id)getAttachedObjectFromObject:(id)a0 withKey:(id)a1;
+ (void)attachObject:(id)a0 toObject:(id)a1 withKey:(id)a2;

@end
